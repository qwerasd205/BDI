/* BetterDiscord Installer
 *
 * Copyright (c) 2019-present Jiiks - https://github.com/Jiiks
 * All rights reserved.
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <QObject>
#include <QMouseEvent>

#include "ui_splash.h"

class Splash final : public QWidget {
	Q_OBJECT

public:
	explicit Splash(QWidget *parent = Q_NULLPTR);

private:
	Ui::Splash _ui;

protected:
	void mouseMoveEvent(QMouseEvent *event) override;
	void mousePressEvent(QMouseEvent *event) override;
	void mouseReleaseEvent(QMouseEvent *event) override;
	int _mousePressX;
	int _mousePressY;
	bool _drag;

public slots:
	void attemptClose();

signals:
	void finished();
};