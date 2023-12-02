//
// Created by marsh on 02.12.2023.
//

#ifndef INC_37_4_3_PDU_PDUMAINWINDOW_H
#define INC_37_4_3_PDU_PDUMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLCDNumber>

template<typename T>
T change2digitValue(T current_value, T input_value) {
	if (current_value < 10)
		return current_value * 10 + input_value;
	else {
		return (current_value % 10) * 10 + input_value;
	}
}

template<typename T>
T changeChannelUp(T current_ch) {
	if (current_ch > 97)
		return 99;
	else
		return current_ch + 1;
}

template<typename T>
T changeChannelDown(T current_ch) {
	if (current_ch < 2)
		return 0;
	else
		return current_ch - 1;
}

template<typename T>
T changeVolumeUp(T current_vol) {
	if (current_vol >= 90)
		return 99;
	else
		return current_vol + 10;
}

template<typename T>
T changeVolumeDown(T current_vol) {
	if (current_vol <= 10)
		return 0;
	else if (current_vol == 99)
		return current_vol - 9;
	else
		return current_vol - 10;
}

class PduMainWindow : public QMainWindow {
	Q_OBJECT
public:
	QLCDNumber* lcdNumber_1 = nullptr;
	QLCDNumber* lcdNumber_2 = nullptr;

	explicit PduMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}
public slots:
	void add_0() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 0));
	};
	void add_1() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 1));
	};
	void add_2() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 2));
	};
	void add_3() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 3));
	};
	void add_4() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 4));
	};
	void add_5() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 5));
	};
	void add_6() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 6));
	};
	void add_7() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 7));
	};
	void add_8() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 8));
	};
	void add_9() {
		lcdNumber_1->display(change2digitValue<int>(lcdNumber_1->intValue(), 9));
	};
	void ch_up() {
		lcdNumber_1->display(changeChannelUp<int>(lcdNumber_1->intValue()));
	};
	void ch_down() {
		lcdNumber_1->display(changeChannelDown<int>(lcdNumber_1->intValue()));
	};
	void vol_up() {
		lcdNumber_2->display(changeVolumeUp<int>(lcdNumber_2->intValue()));
	};
	void vol_down() {
		lcdNumber_2->display(changeVolumeDown<int>(lcdNumber_2->intValue()));
	};
};

#endif //INC_37_4_3_PDU_PDUMAINWINDOW_H
