// This file is part of RSS Guard.
//
// Copyright (C) 2011-2016 by Martin Rotter <rotter.martinos@gmail.com>
//
// RSS Guard is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// RSS Guard is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with RSS Guard. If not, see <http://www.gnu.org/licenses/>.

#ifndef DATABASEQUERIES_H
#define DATABASEQUERIES_H

#include "services/abstract/rootitem.h"

#include <QSqlQuery>


class DatabaseQueries {
  public:
    static bool markMessagesRead(QSqlDatabase db, const QStringList &ids, RootItem::ReadStatus read);
    static bool markMessageImportant(QSqlDatabase db, int id, RootItem::Importance importance);
    static bool switchMessagesImportance(QSqlDatabase db, const QStringList &ids);
    static bool permanentlyDeleteMessages(QSqlDatabase db, const QStringList &ids);
    static bool deleteOrRestoreMessagesToFromBin(QSqlDatabase db, const QStringList &ids, bool deleted);
    static bool purgeImportantMessages(QSqlDatabase db);
    static bool purgeReadMessages(QSqlDatabase db);
    static bool purgeOldMessages(QSqlDatabase db, int older_than_days);
    static bool purgeRecycleBin(QSqlDatabase db);
    static QMap<int,int> getMessageCountsForCategory(QSqlDatabase db, int custom_id, int account_id,
                                          bool including_total_counts, bool *ok = NULL);
    static int getMessageCountsForFeed(QSqlDatabase db, int feed_custom_id, int account_id,
                                       bool including_total_counts, bool *ok = NULL);
    static int getMessageCountsForBin(QSqlDatabase db, int account_id, bool including_total_counts, bool *ok = NULL);
    static QList<Message> getUndeletedMessages(QSqlDatabase db, int feed_custom_id, int account_id, bool *ok = NULL);
    static int updateMessages(QSqlDatabase db, const QList<Message> &messages, int feed_custom_id,
                              int account_id, const QString &url, bool *any_message_changed, bool *ok = NULL);

  private:
    explicit DatabaseQueries();
};

#endif // DATABASEQUERIES_H