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

#ifndef TTRSSRECYCLEBIN_H
#define TTRSSRECYCLEBIN_H

#include "services/abstract/recyclebin.h"


class TtRssServiceRoot;

class TtRssRecycleBin : public RecycleBin {
    Q_OBJECT

  public:
    explicit TtRssRecycleBin(RootItem *parent = 0);
    virtual ~TtRssRecycleBin();

    TtRssServiceRoot *serviceRoot();

    bool markAsReadUnread(ReadStatus status);
};

#endif // TTRSSRECYCLEBIN_H