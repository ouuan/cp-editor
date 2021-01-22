/*
 * Copyright (C) 2019-2020 Ashar Khan <ashar786khan@gmail.com>
 *
 * This file is part of CP Editor.
 *
 * CP Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * I will not be responsible if CP Editor behaves in unexpected way and
 * causes your ratings to go down and or lose any important contest.
 *
 * Believe Software is "Software" and it isn't immune to bugs.
 *
 */

#ifndef SUPPORTUSDIALOG_HPP
#define SUPPORTUSDIALOG_HPP

#include <QDialog>

class QTextBrowser;

class SupportUsDialog : public QDialog
{
    Q_OBJECT

  public:
    explicit SupportUsDialog(QWidget *parent = nullptr);

  private slots:
    void onAnchorClicked(const QUrl &url);

  private:
    QTextBrowser *textBrowser = nullptr;
};

#endif // SUPPORTUSDIALOG_HPP
