/********************************************************************************
** Form generated from reading UI file 'doctorsoffice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORSOFFICE_H
#define UI_DOCTORSOFFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorsOffice
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QCalendarWidget *calendarWidget;
    QGroupBox *createApptGroup;
    QLabel *createApptPatientLabel;
    QLabel *createApptDateLabel;
    QLabel *createApptDoctorLabel;
    QLineEdit *createApptPatientLine;
    QLineEdit *createApptDoctorLine;
    QPushButton *saveApptButton;
    QLabel *createApptTimeLabel;
    QDateEdit *createApptDateEdit;
    QTimeEdit *createApptTimeEdit;
    QGroupBox *createPatientGroup;
    QLineEdit *createPatientLastLine;
    QLineEdit *createPatientFirstLine;
    QLabel *createPatientFirstLabel;
    QLabel *createPatientLastLabel;
    QLabel *createPatientBdayLabel;
    QLabel *createPatientPersonNrLabel;
    QLineEdit *createPatientPersonNrLine;
    QDateEdit *createPatientBday;
    QLabel *createPatientMobileLabel;
    QLineEdit *createPatientMobileLine;
    QPushButton *savePatientButton;
    QLabel *createPatientStreetLabel;
    QLabel *createPatientCityLabel;
    QLabel *createPatientPostLabel;
    QLineEdit *createPatientStreetLine;
    QLineEdit *createPatientCityLine;
    QLineEdit *createPatientPostLine;
    QWidget *appointmentTab;
    QLabel *apptsLabel;
    QTableWidget *apptTable;
    QPushButton *deleteApptButton;
    QWidget *patientTab;
    QListWidget *patientList;
    QGroupBox *basicInfoGroup;
    QLineEdit *patientLastLine;
    QLineEdit *patientFirstLine;
    QLabel *patientFirstLabel;
    QLabel *patientLastLabel;
    QLabel *patientBdayLabel;
    QLabel *patientPersonNrLabel;
    QLineEdit *patientPersonNrLine;
    QDateEdit *patientBday;
    QGroupBox *contactInfoGroup;
    QLabel *patientMobileLabel;
    QLineEdit *patientMobileLine;
    QLabel *patientStreetLabel;
    QLineEdit *patientStreetLine;
    QLabel *patientCityLabel;
    QLabel *patientPostLabel;
    QLineEdit *patientCityLine;
    QLineEdit *patientPostLine;
    QToolBox *patientToolBox;
    QWidget *historyPage;
    QTableWidget *historyTable;
    QWidget *currentReportPage;
    QPlainTextEdit *summaryText;
    QLabel *summaryLabel;
    QLabel *diagnosisLabel;
    QLabel *prescriptionLabel;
    QPlainTextEdit *diagnosisText;
    QPlainTextEdit *prescriptionText;
    QPushButton *selectPatientButton;
    QLabel *patientListLabel;
    QPushButton *savePatientInfoButton;
    QPushButton *editPatientInfoButton;
    QWidget *employeeTab;
    QLabel *employeeListLabel;
    QPushButton *selectEmployeeButton;
    QGroupBox *createEmployeeGroup;
    QLabel *createEmployeeFirstLabel;
    QLabel *createEmployeeLastLabel;
    QLabel *createEmployeePositionLabel;
    QLabel *createEmployeeMobileLabel;
    QLineEdit *createEmployeeFirstLine;
    QLineEdit *createEmployeeLastLine;
    QLineEdit *createEmployeePositionLine;
    QLineEdit *createEmployeeMobileLine;
    QPushButton *saveCreateEmployee;
    QGroupBox *employeeInfoGroup;
    QLabel *employeeIdLabel;
    QLabel *employeeFirstLabel;
    QLabel *employeeLastLabel;
    QLabel *employeePositionLabel;
    QLabel *employeeMobileLabel;
    QLineEdit *employeeIdLine;
    QLineEdit *employeeFirstLine;
    QLineEdit *employeeLastLine;
    QLineEdit *employeePositionLine;
    QLineEdit *employeeMobileLine;
    QPushButton *saveEmployeeInfoButton;
    QPushButton *editEmployeeInfoButton;
    QListWidget *employeeList;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DoctorsOffice)
    {
        if (DoctorsOffice->objectName().isEmpty())
            DoctorsOffice->setObjectName(QStringLiteral("DoctorsOffice"));
        DoctorsOffice->resize(821, 683);
        centralWidget = new QWidget(DoctorsOffice);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 801, 611));
        tabWidget->setIconSize(QSize(32, 32));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        calendarWidget = new QCalendarWidget(homeTab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 20, 401, 531));
        createApptGroup = new QGroupBox(homeTab);
        createApptGroup->setObjectName(QStringLiteral("createApptGroup"));
        createApptGroup->setGeometry(QRect(420, 20, 361, 201));
        createApptPatientLabel = new QLabel(createApptGroup);
        createApptPatientLabel->setObjectName(QStringLiteral("createApptPatientLabel"));
        createApptPatientLabel->setGeometry(QRect(30, 30, 81, 16));
        createApptDateLabel = new QLabel(createApptGroup);
        createApptDateLabel->setObjectName(QStringLiteral("createApptDateLabel"));
        createApptDateLabel->setGeometry(QRect(30, 90, 41, 16));
        createApptDoctorLabel = new QLabel(createApptGroup);
        createApptDoctorLabel->setObjectName(QStringLiteral("createApptDoctorLabel"));
        createApptDoctorLabel->setGeometry(QRect(30, 60, 81, 16));
        createApptPatientLine = new QLineEdit(createApptGroup);
        createApptPatientLine->setObjectName(QStringLiteral("createApptPatientLine"));
        createApptPatientLine->setGeometry(QRect(120, 30, 191, 22));
        createApptDoctorLine = new QLineEdit(createApptGroup);
        createApptDoctorLine->setObjectName(QStringLiteral("createApptDoctorLine"));
        createApptDoctorLine->setGeometry(QRect(120, 60, 191, 22));
        saveApptButton = new QPushButton(createApptGroup);
        saveApptButton->setObjectName(QStringLiteral("saveApptButton"));
        saveApptButton->setGeometry(QRect(220, 150, 93, 28));
        createApptTimeLabel = new QLabel(createApptGroup);
        createApptTimeLabel->setObjectName(QStringLiteral("createApptTimeLabel"));
        createApptTimeLabel->setGeometry(QRect(30, 120, 55, 16));
        createApptDateEdit = new QDateEdit(createApptGroup);
        createApptDateEdit->setObjectName(QStringLiteral("createApptDateEdit"));
        createApptDateEdit->setGeometry(QRect(120, 90, 191, 22));
        createApptTimeEdit = new QTimeEdit(createApptGroup);
        createApptTimeEdit->setObjectName(QStringLiteral("createApptTimeEdit"));
        createApptTimeEdit->setGeometry(QRect(120, 120, 191, 22));
        createPatientGroup = new QGroupBox(homeTab);
        createPatientGroup->setObjectName(QStringLiteral("createPatientGroup"));
        createPatientGroup->setGeometry(QRect(420, 230, 361, 321));
        createPatientGroup->setAutoFillBackground(false);
        createPatientGroup->setCheckable(false);
        createPatientLastLine = new QLineEdit(createPatientGroup);
        createPatientLastLine->setObjectName(QStringLiteral("createPatientLastLine"));
        createPatientLastLine->setGeometry(QRect(140, 60, 191, 22));
        createPatientFirstLine = new QLineEdit(createPatientGroup);
        createPatientFirstLine->setObjectName(QStringLiteral("createPatientFirstLine"));
        createPatientFirstLine->setGeometry(QRect(140, 30, 191, 22));
        createPatientFirstLabel = new QLabel(createPatientGroup);
        createPatientFirstLabel->setObjectName(QStringLiteral("createPatientFirstLabel"));
        createPatientFirstLabel->setGeometry(QRect(30, 30, 61, 16));
        createPatientLastLabel = new QLabel(createPatientGroup);
        createPatientLastLabel->setObjectName(QStringLiteral("createPatientLastLabel"));
        createPatientLastLabel->setGeometry(QRect(30, 60, 61, 16));
        createPatientBdayLabel = new QLabel(createPatientGroup);
        createPatientBdayLabel->setObjectName(QStringLiteral("createPatientBdayLabel"));
        createPatientBdayLabel->setGeometry(QRect(30, 90, 71, 16));
        createPatientPersonNrLabel = new QLabel(createPatientGroup);
        createPatientPersonNrLabel->setObjectName(QStringLiteral("createPatientPersonNrLabel"));
        createPatientPersonNrLabel->setGeometry(QRect(30, 120, 71, 16));
        createPatientPersonNrLine = new QLineEdit(createPatientGroup);
        createPatientPersonNrLine->setObjectName(QStringLiteral("createPatientPersonNrLine"));
        createPatientPersonNrLine->setGeometry(QRect(140, 120, 191, 22));
        createPatientBday = new QDateEdit(createPatientGroup);
        createPatientBday->setObjectName(QStringLiteral("createPatientBday"));
        createPatientBday->setGeometry(QRect(140, 90, 191, 22));
        createPatientMobileLabel = new QLabel(createPatientGroup);
        createPatientMobileLabel->setObjectName(QStringLiteral("createPatientMobileLabel"));
        createPatientMobileLabel->setGeometry(QRect(30, 150, 55, 16));
        createPatientMobileLine = new QLineEdit(createPatientGroup);
        createPatientMobileLine->setObjectName(QStringLiteral("createPatientMobileLine"));
        createPatientMobileLine->setGeometry(QRect(140, 150, 191, 22));
        savePatientButton = new QPushButton(createPatientGroup);
        savePatientButton->setObjectName(QStringLiteral("savePatientButton"));
        savePatientButton->setGeometry(QRect(240, 270, 93, 28));
        createPatientStreetLabel = new QLabel(createPatientGroup);
        createPatientStreetLabel->setObjectName(QStringLiteral("createPatientStreetLabel"));
        createPatientStreetLabel->setGeometry(QRect(30, 180, 91, 16));
        createPatientCityLabel = new QLabel(createPatientGroup);
        createPatientCityLabel->setObjectName(QStringLiteral("createPatientCityLabel"));
        createPatientCityLabel->setGeometry(QRect(30, 210, 55, 16));
        createPatientPostLabel = new QLabel(createPatientGroup);
        createPatientPostLabel->setObjectName(QStringLiteral("createPatientPostLabel"));
        createPatientPostLabel->setGeometry(QRect(30, 240, 55, 16));
        createPatientStreetLine = new QLineEdit(createPatientGroup);
        createPatientStreetLine->setObjectName(QStringLiteral("createPatientStreetLine"));
        createPatientStreetLine->setGeometry(QRect(140, 180, 191, 22));
        createPatientCityLine = new QLineEdit(createPatientGroup);
        createPatientCityLine->setObjectName(QStringLiteral("createPatientCityLine"));
        createPatientCityLine->setGeometry(QRect(140, 210, 191, 22));
        createPatientPostLine = new QLineEdit(createPatientGroup);
        createPatientPostLine->setObjectName(QStringLiteral("createPatientPostLine"));
        createPatientPostLine->setGeometry(QRect(140, 240, 191, 22));
        tabWidget->addTab(homeTab, QString());
        appointmentTab = new QWidget();
        appointmentTab->setObjectName(QStringLiteral("appointmentTab"));
        apptsLabel = new QLabel(appointmentTab);
        apptsLabel->setObjectName(QStringLiteral("apptsLabel"));
        apptsLabel->setGeometry(QRect(10, 10, 141, 16));
        apptTable = new QTableWidget(appointmentTab);
        if (apptTable->columnCount() < 4)
            apptTable->setColumnCount(4);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        apptTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        apptTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        apptTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        apptTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        apptTable->setObjectName(QStringLiteral("apptTable"));
        apptTable->setGeometry(QRect(10, 40, 771, 491));
        deleteApptButton = new QPushButton(appointmentTab);
        deleteApptButton->setObjectName(QStringLiteral("deleteApptButton"));
        deleteApptButton->setGeometry(QRect(690, 540, 93, 28));
        tabWidget->addTab(appointmentTab, QString());
        patientTab = new QWidget();
        patientTab->setObjectName(QStringLiteral("patientTab"));
        patientList = new QListWidget(patientTab);
        patientList->setObjectName(QStringLiteral("patientList"));
        patientList->setGeometry(QRect(10, 30, 201, 501));
        basicInfoGroup = new QGroupBox(patientTab);
        basicInfoGroup->setObjectName(QStringLiteral("basicInfoGroup"));
        basicInfoGroup->setGeometry(QRect(220, 10, 251, 161));
        basicInfoGroup->setAutoFillBackground(false);
        basicInfoGroup->setCheckable(false);
        patientLastLine = new QLineEdit(basicInfoGroup);
        patientLastLine->setObjectName(QStringLiteral("patientLastLine"));
        patientLastLine->setEnabled(false);
        patientLastLine->setGeometry(QRect(110, 60, 113, 22));
        patientFirstLine = new QLineEdit(basicInfoGroup);
        patientFirstLine->setObjectName(QStringLiteral("patientFirstLine"));
        patientFirstLine->setEnabled(false);
        patientFirstLine->setGeometry(QRect(110, 30, 113, 22));
        patientFirstLabel = new QLabel(basicInfoGroup);
        patientFirstLabel->setObjectName(QStringLiteral("patientFirstLabel"));
        patientFirstLabel->setGeometry(QRect(20, 30, 61, 16));
        patientLastLabel = new QLabel(basicInfoGroup);
        patientLastLabel->setObjectName(QStringLiteral("patientLastLabel"));
        patientLastLabel->setGeometry(QRect(20, 60, 61, 16));
        patientBdayLabel = new QLabel(basicInfoGroup);
        patientBdayLabel->setObjectName(QStringLiteral("patientBdayLabel"));
        patientBdayLabel->setGeometry(QRect(20, 90, 71, 16));
        patientPersonNrLabel = new QLabel(basicInfoGroup);
        patientPersonNrLabel->setObjectName(QStringLiteral("patientPersonNrLabel"));
        patientPersonNrLabel->setGeometry(QRect(20, 120, 71, 16));
        patientPersonNrLine = new QLineEdit(basicInfoGroup);
        patientPersonNrLine->setObjectName(QStringLiteral("patientPersonNrLine"));
        patientPersonNrLine->setEnabled(false);
        patientPersonNrLine->setGeometry(QRect(110, 120, 113, 22));
        patientBday = new QDateEdit(basicInfoGroup);
        patientBday->setObjectName(QStringLiteral("patientBday"));
        patientBday->setEnabled(false);
        patientBday->setGeometry(QRect(110, 90, 111, 22));
        contactInfoGroup = new QGroupBox(patientTab);
        contactInfoGroup->setObjectName(QStringLiteral("contactInfoGroup"));
        contactInfoGroup->setGeometry(QRect(490, 10, 291, 161));
        patientMobileLabel = new QLabel(contactInfoGroup);
        patientMobileLabel->setObjectName(QStringLiteral("patientMobileLabel"));
        patientMobileLabel->setGeometry(QRect(20, 30, 41, 16));
        patientMobileLine = new QLineEdit(contactInfoGroup);
        patientMobileLine->setObjectName(QStringLiteral("patientMobileLine"));
        patientMobileLine->setEnabled(false);
        patientMobileLine->setGeometry(QRect(130, 30, 131, 22));
        patientStreetLabel = new QLabel(contactInfoGroup);
        patientStreetLabel->setObjectName(QStringLiteral("patientStreetLabel"));
        patientStreetLabel->setGeometry(QRect(20, 60, 91, 16));
        patientStreetLine = new QLineEdit(contactInfoGroup);
        patientStreetLine->setObjectName(QStringLiteral("patientStreetLine"));
        patientStreetLine->setEnabled(false);
        patientStreetLine->setGeometry(QRect(130, 60, 131, 22));
        patientCityLabel = new QLabel(contactInfoGroup);
        patientCityLabel->setObjectName(QStringLiteral("patientCityLabel"));
        patientCityLabel->setGeometry(QRect(20, 90, 31, 16));
        patientPostLabel = new QLabel(contactInfoGroup);
        patientPostLabel->setObjectName(QStringLiteral("patientPostLabel"));
        patientPostLabel->setGeometry(QRect(20, 120, 71, 16));
        patientCityLine = new QLineEdit(contactInfoGroup);
        patientCityLine->setObjectName(QStringLiteral("patientCityLine"));
        patientCityLine->setEnabled(false);
        patientCityLine->setGeometry(QRect(130, 90, 131, 22));
        patientPostLine = new QLineEdit(contactInfoGroup);
        patientPostLine->setObjectName(QStringLiteral("patientPostLine"));
        patientPostLine->setEnabled(false);
        patientPostLine->setGeometry(QRect(130, 120, 131, 22));
        patientToolBox = new QToolBox(patientTab);
        patientToolBox->setObjectName(QStringLiteral("patientToolBox"));
        patientToolBox->setGeometry(QRect(220, 180, 561, 351));
        historyPage = new QWidget();
        historyPage->setObjectName(QStringLiteral("historyPage"));
        historyPage->setGeometry(QRect(0, 0, 561, 289));
        historyTable = new QTableWidget(historyPage);
        if (historyTable->columnCount() < 4)
            historyTable->setColumnCount(4);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        historyTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        historyTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        historyTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        historyTable->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        historyTable->setObjectName(QStringLiteral("historyTable"));
        historyTable->setGeometry(QRect(20, 10, 521, 271));
        patientToolBox->addItem(historyPage, QStringLiteral("History"));
        currentReportPage = new QWidget();
        currentReportPage->setObjectName(QStringLiteral("currentReportPage"));
        currentReportPage->setGeometry(QRect(0, 0, 561, 289));
        summaryText = new QPlainTextEdit(currentReportPage);
        summaryText->setObjectName(QStringLiteral("summaryText"));
        summaryText->setGeometry(QRect(20, 30, 521, 121));
        summaryLabel = new QLabel(currentReportPage);
        summaryLabel->setObjectName(QStringLiteral("summaryLabel"));
        summaryLabel->setGeometry(QRect(20, 10, 55, 16));
        diagnosisLabel = new QLabel(currentReportPage);
        diagnosisLabel->setObjectName(QStringLiteral("diagnosisLabel"));
        diagnosisLabel->setGeometry(QRect(20, 160, 55, 16));
        prescriptionLabel = new QLabel(currentReportPage);
        prescriptionLabel->setObjectName(QStringLiteral("prescriptionLabel"));
        prescriptionLabel->setGeometry(QRect(350, 160, 71, 16));
        diagnosisText = new QPlainTextEdit(currentReportPage);
        diagnosisText->setObjectName(QStringLiteral("diagnosisText"));
        diagnosisText->setGeometry(QRect(20, 180, 321, 91));
        prescriptionText = new QPlainTextEdit(currentReportPage);
        prescriptionText->setObjectName(QStringLiteral("prescriptionText"));
        prescriptionText->setGeometry(QRect(350, 180, 191, 91));
        patientToolBox->addItem(currentReportPage, QStringLiteral("Current report"));
        selectPatientButton = new QPushButton(patientTab);
        selectPatientButton->setObjectName(QStringLiteral("selectPatientButton"));
        selectPatientButton->setGeometry(QRect(10, 540, 201, 28));
        patientListLabel = new QLabel(patientTab);
        patientListLabel->setObjectName(QStringLiteral("patientListLabel"));
        patientListLabel->setGeometry(QRect(10, 10, 61, 16));
        savePatientInfoButton = new QPushButton(patientTab);
        savePatientInfoButton->setObjectName(QStringLiteral("savePatientInfoButton"));
        savePatientInfoButton->setGeometry(QRect(690, 540, 93, 28));
        editPatientInfoButton = new QPushButton(patientTab);
        editPatientInfoButton->setObjectName(QStringLiteral("editPatientInfoButton"));
        editPatientInfoButton->setGeometry(QRect(590, 540, 93, 28));
        tabWidget->addTab(patientTab, QString());
        employeeTab = new QWidget();
        employeeTab->setObjectName(QStringLiteral("employeeTab"));
        employeeListLabel = new QLabel(employeeTab);
        employeeListLabel->setObjectName(QStringLiteral("employeeListLabel"));
        employeeListLabel->setGeometry(QRect(10, 20, 81, 16));
        selectEmployeeButton = new QPushButton(employeeTab);
        selectEmployeeButton->setObjectName(QStringLiteral("selectEmployeeButton"));
        selectEmployeeButton->setGeometry(QRect(10, 510, 261, 28));
        createEmployeeGroup = new QGroupBox(employeeTab);
        createEmployeeGroup->setObjectName(QStringLiteral("createEmployeeGroup"));
        createEmployeeGroup->setGeometry(QRect(290, 30, 481, 241));
        createEmployeeFirstLabel = new QLabel(createEmployeeGroup);
        createEmployeeFirstLabel->setObjectName(QStringLiteral("createEmployeeFirstLabel"));
        createEmployeeFirstLabel->setGeometry(QRect(40, 40, 61, 16));
        createEmployeeLastLabel = new QLabel(createEmployeeGroup);
        createEmployeeLastLabel->setObjectName(QStringLiteral("createEmployeeLastLabel"));
        createEmployeeLastLabel->setGeometry(QRect(40, 70, 61, 16));
        createEmployeePositionLabel = new QLabel(createEmployeeGroup);
        createEmployeePositionLabel->setObjectName(QStringLiteral("createEmployeePositionLabel"));
        createEmployeePositionLabel->setGeometry(QRect(40, 100, 71, 16));
        createEmployeeMobileLabel = new QLabel(createEmployeeGroup);
        createEmployeeMobileLabel->setObjectName(QStringLiteral("createEmployeeMobileLabel"));
        createEmployeeMobileLabel->setGeometry(QRect(40, 130, 41, 16));
        createEmployeeFirstLine = new QLineEdit(createEmployeeGroup);
        createEmployeeFirstLine->setObjectName(QStringLiteral("createEmployeeFirstLine"));
        createEmployeeFirstLine->setGeometry(QRect(170, 40, 271, 22));
        createEmployeeLastLine = new QLineEdit(createEmployeeGroup);
        createEmployeeLastLine->setObjectName(QStringLiteral("createEmployeeLastLine"));
        createEmployeeLastLine->setGeometry(QRect(170, 70, 271, 22));
        createEmployeePositionLine = new QLineEdit(createEmployeeGroup);
        createEmployeePositionLine->setObjectName(QStringLiteral("createEmployeePositionLine"));
        createEmployeePositionLine->setGeometry(QRect(170, 100, 271, 22));
        createEmployeeMobileLine = new QLineEdit(createEmployeeGroup);
        createEmployeeMobileLine->setObjectName(QStringLiteral("createEmployeeMobileLine"));
        createEmployeeMobileLine->setGeometry(QRect(170, 130, 271, 22));
        saveCreateEmployee = new QPushButton(createEmployeeGroup);
        saveCreateEmployee->setObjectName(QStringLiteral("saveCreateEmployee"));
        saveCreateEmployee->setGeometry(QRect(350, 170, 93, 28));
        employeeInfoGroup = new QGroupBox(employeeTab);
        employeeInfoGroup->setObjectName(QStringLiteral("employeeInfoGroup"));
        employeeInfoGroup->setGeometry(QRect(290, 290, 481, 251));
        employeeIdLabel = new QLabel(employeeInfoGroup);
        employeeIdLabel->setObjectName(QStringLiteral("employeeIdLabel"));
        employeeIdLabel->setGeometry(QRect(40, 30, 71, 16));
        employeeFirstLabel = new QLabel(employeeInfoGroup);
        employeeFirstLabel->setObjectName(QStringLiteral("employeeFirstLabel"));
        employeeFirstLabel->setGeometry(QRect(40, 60, 61, 16));
        employeeLastLabel = new QLabel(employeeInfoGroup);
        employeeLastLabel->setObjectName(QStringLiteral("employeeLastLabel"));
        employeeLastLabel->setGeometry(QRect(40, 90, 61, 16));
        employeePositionLabel = new QLabel(employeeInfoGroup);
        employeePositionLabel->setObjectName(QStringLiteral("employeePositionLabel"));
        employeePositionLabel->setGeometry(QRect(40, 120, 71, 16));
        employeeMobileLabel = new QLabel(employeeInfoGroup);
        employeeMobileLabel->setObjectName(QStringLiteral("employeeMobileLabel"));
        employeeMobileLabel->setGeometry(QRect(40, 150, 41, 16));
        employeeIdLine = new QLineEdit(employeeInfoGroup);
        employeeIdLine->setObjectName(QStringLiteral("employeeIdLine"));
        employeeIdLine->setEnabled(false);
        employeeIdLine->setGeometry(QRect(170, 30, 271, 22));
        employeeFirstLine = new QLineEdit(employeeInfoGroup);
        employeeFirstLine->setObjectName(QStringLiteral("employeeFirstLine"));
        employeeFirstLine->setEnabled(false);
        employeeFirstLine->setGeometry(QRect(170, 60, 271, 22));
        employeeLastLine = new QLineEdit(employeeInfoGroup);
        employeeLastLine->setObjectName(QStringLiteral("employeeLastLine"));
        employeeLastLine->setEnabled(false);
        employeeLastLine->setGeometry(QRect(170, 90, 271, 22));
        employeePositionLine = new QLineEdit(employeeInfoGroup);
        employeePositionLine->setObjectName(QStringLiteral("employeePositionLine"));
        employeePositionLine->setEnabled(false);
        employeePositionLine->setGeometry(QRect(170, 120, 271, 22));
        employeeMobileLine = new QLineEdit(employeeInfoGroup);
        employeeMobileLine->setObjectName(QStringLiteral("employeeMobileLine"));
        employeeMobileLine->setEnabled(false);
        employeeMobileLine->setGeometry(QRect(170, 150, 271, 22));
        saveEmployeeInfoButton = new QPushButton(employeeInfoGroup);
        saveEmployeeInfoButton->setObjectName(QStringLiteral("saveEmployeeInfoButton"));
        saveEmployeeInfoButton->setGeometry(QRect(350, 190, 93, 28));
        editEmployeeInfoButton = new QPushButton(employeeInfoGroup);
        editEmployeeInfoButton->setObjectName(QStringLiteral("editEmployeeInfoButton"));
        editEmployeeInfoButton->setGeometry(QRect(250, 190, 93, 28));
        employeeList = new QListWidget(employeeTab);
        employeeList->setObjectName(QStringLiteral("employeeList"));
        employeeList->setGeometry(QRect(10, 50, 261, 451));
        tabWidget->addTab(employeeTab, QString());
        DoctorsOffice->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DoctorsOffice);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 821, 26));
        DoctorsOffice->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DoctorsOffice);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DoctorsOffice->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DoctorsOffice);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DoctorsOffice->setStatusBar(statusBar);

        retranslateUi(DoctorsOffice);

        tabWidget->setCurrentIndex(0);
        patientToolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DoctorsOffice);
    } // setupUi

    void retranslateUi(QMainWindow *DoctorsOffice)
    {
        DoctorsOffice->setWindowTitle(QApplication::translate("DoctorsOffice", "DoctorsOffice", nullptr));
        createApptGroup->setTitle(QApplication::translate("DoctorsOffice", "Create Appointment", nullptr));
        createApptPatientLabel->setText(QApplication::translate("DoctorsOffice", "Person Nr", nullptr));
        createApptDateLabel->setText(QApplication::translate("DoctorsOffice", "Date", nullptr));
        createApptDoctorLabel->setText(QApplication::translate("DoctorsOffice", "Employee Id", nullptr));
        createApptDoctorLine->setText(QApplication::translate("DoctorsOffice", "Dr. ", nullptr));
        saveApptButton->setText(QApplication::translate("DoctorsOffice", "Save", nullptr));
        createApptTimeLabel->setText(QApplication::translate("DoctorsOffice", "Time", nullptr));
        createPatientGroup->setTitle(QApplication::translate("DoctorsOffice", "Create Patient", nullptr));
        createPatientFirstLabel->setText(QApplication::translate("DoctorsOffice", "First name", nullptr));
        createPatientLastLabel->setText(QApplication::translate("DoctorsOffice", "Last name", nullptr));
        createPatientBdayLabel->setText(QApplication::translate("DoctorsOffice", "Date of birth", nullptr));
        createPatientPersonNrLabel->setText(QApplication::translate("DoctorsOffice", "Personal nr.", nullptr));
        createPatientMobileLabel->setText(QApplication::translate("DoctorsOffice", "Mobile", nullptr));
        savePatientButton->setText(QApplication::translate("DoctorsOffice", "Save", nullptr));
        createPatientStreetLabel->setText(QApplication::translate("DoctorsOffice", "Street address", nullptr));
        createPatientCityLabel->setText(QApplication::translate("DoctorsOffice", "City", nullptr));
        createPatientPostLabel->setText(QApplication::translate("DoctorsOffice", "Post code", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("DoctorsOffice", "Home", nullptr));
        apptsLabel->setText(QApplication::translate("DoctorsOffice", "Scheduled appointments", nullptr));
        QTableWidgetItem *___qtablewidgetitem = apptTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DoctorsOffice", "Patient", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = apptTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DoctorsOffice", "Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = apptTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DoctorsOffice", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = apptTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DoctorsOffice", "Time", nullptr));
        deleteApptButton->setText(QApplication::translate("DoctorsOffice", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(appointmentTab), QApplication::translate("DoctorsOffice", "Appointment", nullptr));
        basicInfoGroup->setTitle(QApplication::translate("DoctorsOffice", "Basic information", nullptr));
        patientFirstLabel->setText(QApplication::translate("DoctorsOffice", "First name", nullptr));
        patientLastLabel->setText(QApplication::translate("DoctorsOffice", "Last name", nullptr));
        patientBdayLabel->setText(QApplication::translate("DoctorsOffice", "Date of birth", nullptr));
        patientPersonNrLabel->setText(QApplication::translate("DoctorsOffice", "Personal nr.", nullptr));
        contactInfoGroup->setTitle(QApplication::translate("DoctorsOffice", "Contact information", nullptr));
        patientMobileLabel->setText(QApplication::translate("DoctorsOffice", "Mobile", nullptr));
        patientStreetLabel->setText(QApplication::translate("DoctorsOffice", "Street address", nullptr));
        patientCityLabel->setText(QApplication::translate("DoctorsOffice", "City", nullptr));
        patientPostLabel->setText(QApplication::translate("DoctorsOffice", "Postal code", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = historyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("DoctorsOffice", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = historyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("DoctorsOffice", "Summary", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = historyTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("DoctorsOffice", "Diagnosis", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = historyTable->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("DoctorsOffice", "Prescription", nullptr));
        patientToolBox->setItemText(patientToolBox->indexOf(historyPage), QApplication::translate("DoctorsOffice", "History", nullptr));
        summaryLabel->setText(QApplication::translate("DoctorsOffice", "Summary", nullptr));
        diagnosisLabel->setText(QApplication::translate("DoctorsOffice", "Diagnosis", nullptr));
        prescriptionLabel->setText(QApplication::translate("DoctorsOffice", "Prescription", nullptr));
        patientToolBox->setItemText(patientToolBox->indexOf(currentReportPage), QApplication::translate("DoctorsOffice", "Current report", nullptr));
        selectPatientButton->setText(QApplication::translate("DoctorsOffice", "Select", nullptr));
        patientListLabel->setText(QApplication::translate("DoctorsOffice", "Patient list", nullptr));
        savePatientInfoButton->setText(QApplication::translate("DoctorsOffice", "Save", nullptr));
        editPatientInfoButton->setText(QApplication::translate("DoctorsOffice", "Edit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(patientTab), QApplication::translate("DoctorsOffice", "Patient", nullptr));
        employeeListLabel->setText(QApplication::translate("DoctorsOffice", "Employee list", nullptr));
        selectEmployeeButton->setText(QApplication::translate("DoctorsOffice", "Select", nullptr));
        createEmployeeGroup->setTitle(QApplication::translate("DoctorsOffice", "Create Employee", nullptr));
        createEmployeeFirstLabel->setText(QApplication::translate("DoctorsOffice", "First name", nullptr));
        createEmployeeLastLabel->setText(QApplication::translate("DoctorsOffice", "Last name", nullptr));
        createEmployeePositionLabel->setText(QApplication::translate("DoctorsOffice", "Position title", nullptr));
        createEmployeeMobileLabel->setText(QApplication::translate("DoctorsOffice", "Mobile", nullptr));
        saveCreateEmployee->setText(QApplication::translate("DoctorsOffice", "Save", nullptr));
        employeeInfoGroup->setTitle(QApplication::translate("DoctorsOffice", "Employee information", nullptr));
        employeeIdLabel->setText(QApplication::translate("DoctorsOffice", "Employee ID", nullptr));
        employeeFirstLabel->setText(QApplication::translate("DoctorsOffice", "First name", nullptr));
        employeeLastLabel->setText(QApplication::translate("DoctorsOffice", "Last name", nullptr));
        employeePositionLabel->setText(QApplication::translate("DoctorsOffice", "Position title", nullptr));
        employeeMobileLabel->setText(QApplication::translate("DoctorsOffice", "Mobile", nullptr));
        saveEmployeeInfoButton->setText(QApplication::translate("DoctorsOffice", "Save", nullptr));
        editEmployeeInfoButton->setText(QApplication::translate("DoctorsOffice", "Edit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(employeeTab), QApplication::translate("DoctorsOffice", "Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorsOffice: public Ui_DoctorsOffice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORSOFFICE_H
