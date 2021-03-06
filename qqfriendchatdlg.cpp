#include "qqfriendchatdlg.h"
#include "ui_qqfriendchatdlg.h"
#include "friendimgsender.h"

#include <QScrollBar>
#include <QDateTime>
#include <QTextEdit>
#include <QTextCursor>
#include <QDebug>
#include <QMouseEvent>
#include <QFileDialog>

QQFriendChatDlg::QQFriendChatDlg(QString uin, QString name, FriendInfo curr_user_info, CaptchaInfo cap_info) :
    QQChatDlg(uin, name, curr_user_info, cap_info),
    ui(new Ui::QQFriendChatDlg())
{
   ui->setupUi(this);
   set_type(QQChatDlg::kFriend);

   ui->v_show_layout_->insertWidget(ui->v_show_layout_->indexOf(ui->second_line_)+1, &te_messages_);
   ui->v_bottom_layout_->insertWidget(ui->v_bottom_layout_->indexOf(ui->fourth_line_)+1, &te_input_);

   QScrollBar *bar = te_messages_.verticalScrollBar();
   connect(bar, SIGNAL(rangeChanged(int, int)), this, SLOT(silderToBottom(int, int)));
   connect(ui->tb_send_img_, SIGNAL(clicked(bool)), this, SLOT(openPathDialog(bool)));
   connect(ui->pb_send_msg_, SIGNAL(clicked()), this, SLOT(sendMsg()));
   connect(ui->tb_qqface_, SIGNAL(clicked()), this, SLOT(openQQFacePanel()));
   connect(ui->pb_close_, SIGNAL(clicked()), this, SLOT(close()));

   connect(ui->tb_close_, SIGNAL(clicked()), this, SLOT(close()));
   connect(ui->tb_mini_, SIGNAL(clicked()), this, SLOT(showMinimized()));

   setWindowOpacity(1);
   setWindowFlags(Qt::FramelessWindowHint);

   setWindowTitle(name_);

   ui->lbl_name_->setText(name_);

   convertor_.addUinNameMap(id_, name_);
   send_url_ = "/channel/send_buddy_msg2";
}

QQFriendChatDlg::~QQFriendChatDlg()
{
    delete ui;
}

void QQFriendChatDlg::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
  QPoint origin_pos = this->pos();

  QPoint origin_mouse_pos = QCursor::pos();
  distance_pos_ = origin_mouse_pos - origin_pos;
}

void QQFriendChatDlg::mouseMoveEvent(QMouseEvent *event)
{
    if (distance_pos_.isNull())
    {
        return;
    }

    this->move(event->globalPos() - distance_pos_);
}

void QQFriendChatDlg::mouseReleaseEvent(QMouseEvent *)
{
    distance_pos_ = QPoint(0, 0);
}

QString QQFriendChatDlg::converToJson(const QString &raw_msg)
{
    QString msg_template = "r={\"to\":" + id_ +",\"face\":525,"
            "\"content\":\"[";

    int idx = raw_msg.indexOf("<p");
    int content_idx = raw_msg.indexOf(">", idx)+1;

    int content_end_idx = raw_msg.indexOf("</p>", content_idx);
    QString content = raw_msg.mid(content_idx, content_end_idx - content_idx);

    while (!content.isEmpty())
    {
        if (content[0] == '<')
        {
            int idx = content.indexOf("src") + 5;
            int end_idx = content.indexOf("\"", idx);
            QString src = content.mid(idx, end_idx - idx);

            if (src.contains("-"))
            {
                msg_template.append("[\\\"offpic\\\",\\\""+ id_file_hash_[src].network_path_ + "\\\",\\\""+ id_file_hash_[src].name_ + "\\\"," + QString::number(id_file_hash_[src].size_) + "],");
            }
            else
            {
                msg_template.append("[\\\"face\\\"," + src + "],");
            }

            content = content.mid(end_idx + 4);
        }
        else
        {
            int idx = content.indexOf("<");
            msg_template.append("\\\"" + content.mid(0, idx) + "\\\",");
            if (idx == -1)
                content = "";
            else
                content = content.mid(idx);
        }
    }

    msg_template = msg_template +
            "[\\\"font\\\",{\\\"name\\\":\\\"%E5%AE%8B%E4%BD%93\\\",\\\"size\\\":\\\"10\\\",\\\"style\\\":[0,0,0],\\\"color\\\":\\\"000000\\\"}]]\","
            "\"msg_id\":" + QString::number(msg_id_++) + ",\"clientid\":\"5412354841\","
            "\"psessionid\":\""+ cap_info_.psessionid_ +"\"}"
            "&clientid=5412354841&psessionid="+cap_info_.psessionid_;
    //msg_template.replace("/", "%2F");
    return msg_template;
}

ImgSender* QQFriendChatDlg::createImgSender()
{
    return new FriendImgSender();
}
