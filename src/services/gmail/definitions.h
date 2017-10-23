// For license of this file, see <object-root-folder>/LICENSE.md.

#ifndef GMAIL_DEFINITIONS_H
#define GMAIL_DEFINITIONS_H

#define GMAIL_OAUTH_AUTH_URL      "https://accounts.google.com/o/oauth2/auth"
#define GMAIL_OAUTH_TOKEN_URL     "https://accounts.google.com/o/oauth2/token"
#define GMAIL_OAUTH_SCOPE         "https://mail.google.com/"

#define GMAIL_API_GET_ATTACHMENT  "https://www.googleapis.com/gmail/v1/users/me/messages/%20/attachments/"
#define GMAIL_API_LABELS_LIST     "https://www.googleapis.com/gmail/v1/users/me/labels"
#define GMAIL_API_MSGS_LIST       "https://www.googleapis.com/gmail/v1/users/me/messages"
#define GMAIL_API_BATCH           "https://www.googleapis.com/batch"

#define GMAIL_ATTACHMENT_SEP      "####"

#define GMAIL_DEFAULT_BATCH_SIZE  50
#define GMAIL_MAX_BATCH_SIZE      999
#define GMAIL_MIN_BATCH_SIZE      20

#define GMAIL_SYSTEM_LABEL_UNREAD   "UNREAD"
#define GMAIL_SYSTEM_LABEL_INBOX    "INBOX"
#define GMAIL_SYSTEM_LABEL_SENT     "SENT"
#define GMAIL_SYSTEM_LABEL_DRAFT    "DRAFT"
#define GMAIL_SYSTEM_LABEL_SPAM     "SPAM"
#define GMAIL_SYSTEM_LABEL_STARRED  "STARRED"
#define GMAIL_SYSTEM_LABEL_TRASH    "TRASH"

#define GMAIL_CONTENT_TYPE_HTTP   "application/http"

#endif // GMAIL_DEFINITIONS_H
