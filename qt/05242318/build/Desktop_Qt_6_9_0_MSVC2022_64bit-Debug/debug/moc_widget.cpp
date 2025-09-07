/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto Widget::qt_create_metaobjectdata<qt_meta_tag_ZN6WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Widget",
        "changesizeButtonClicked",
        "",
        "change_photo_clicked",
        "id",
        "open_edit_menu",
        "mark_finished",
        "mark_deleted",
        "open_class_edit_menu",
        "edit_class",
        "i",
        "updateButtonVisibility",
        "text",
        "onTodayActionTriggered",
        "onTomorrowActionTriggered",
        "onChooseDateActionTriggered",
        "onTodaytimeActionTriggered",
        "onTomorrowtimeActionTriggered",
        "onChooseDatetimeActionTriggered",
        "onEverydayActionTriggered",
        "onEveryweekActionTriggered",
        "onSelfdefineActionTriggered",
        "on_addtodo_returnPressed",
        "on_close_edit_button_clicked",
        "on_edit_todo_title_textChanged",
        "arg1",
        "on_set_todo_finished_clicked",
        "on_add_todo_info_textChanged",
        "on_reset_todo_time_clicked",
        "on_reset_todo_date_clicked",
        "on_reset_todo_repeat_clicked",
        "on_delete_todo_clicked",
        "on_chagesize_clicked",
        "on_add_class_from_web_clicked",
        "on_add_class_by_hand_clicked",
        "on_pushButton_2_clicked",
        "on_pushButton_3_clicked",
        "on_MydayButton_clicked",
        "on_settings_button_clicked",
        "on_dateEdit_userDateChanged",
        "date",
        "on_back_to_home_week_clicked",
        "on_lineEdit_2_returnPressed",
        "showTomatoClock",
        "handleTomatoClockClosed",
        "on_TaskButton_clicked",
        "on_study_time_set_valueChanged",
        "on_rest_time_set_valueChanged",
        "on_tomato_clock_start_button_clicked",
        "on_tomato_clock_stop_button_clicked",
        "on_small_tomato_clock_button_clicked",
        "on_tomato_clock_reset_button_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changesizeButtonClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'change_photo_clicked'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'open_edit_menu'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'mark_finished'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'mark_deleted'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'open_class_edit_menu'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'edit_class'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'updateButtonVisibility'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'onTodayActionTriggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTomorrowActionTriggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChooseDateActionTriggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTodaytimeActionTriggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTomorrowtimeActionTriggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChooseDatetimeActionTriggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEverydayActionTriggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEveryweekActionTriggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSelfdefineActionTriggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addtodo_returnPressed'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_close_edit_button_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_edit_todo_title_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'on_set_todo_finished_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_add_todo_info_textChanged'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reset_todo_time_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reset_todo_date_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reset_todo_repeat_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_delete_todo_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chagesize_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_add_class_from_web_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_add_class_by_hand_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_3_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_MydayButton_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_settings_button_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dateEdit_userDateChanged'
        QtMocHelpers::SlotData<void(const QDate &)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QDate, 40 },
        }}),
        // Slot 'on_back_to_home_week_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEdit_2_returnPressed'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showTomatoClock'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleTomatoClockClosed'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_TaskButton_clicked'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_study_time_set_valueChanged'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_rest_time_set_valueChanged'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_tomato_clock_start_button_clicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tomato_clock_stop_button_clicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_small_tomato_clock_button_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tomato_clock_reset_button_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Widget, qt_meta_tag_ZN6WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6WidgetE_t>.metaTypes,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changesizeButtonClicked(); break;
        case 1: _t->change_photo_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->open_edit_menu((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->mark_finished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->mark_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->open_class_edit_menu((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->edit_class((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->updateButtonVisibility((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->onTodayActionTriggered(); break;
        case 9: _t->onTomorrowActionTriggered(); break;
        case 10: _t->onChooseDateActionTriggered(); break;
        case 11: _t->onTodaytimeActionTriggered(); break;
        case 12: _t->onTomorrowtimeActionTriggered(); break;
        case 13: _t->onChooseDatetimeActionTriggered(); break;
        case 14: _t->onEverydayActionTriggered(); break;
        case 15: _t->onEveryweekActionTriggered(); break;
        case 16: _t->onSelfdefineActionTriggered(); break;
        case 17: _t->on_addtodo_returnPressed(); break;
        case 18: _t->on_close_edit_button_clicked(); break;
        case 19: _t->on_edit_todo_title_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->on_set_todo_finished_clicked(); break;
        case 21: _t->on_add_todo_info_textChanged(); break;
        case 22: _t->on_reset_todo_time_clicked(); break;
        case 23: _t->on_reset_todo_date_clicked(); break;
        case 24: _t->on_reset_todo_repeat_clicked(); break;
        case 25: _t->on_delete_todo_clicked(); break;
        case 26: _t->on_chagesize_clicked(); break;
        case 27: _t->on_add_class_from_web_clicked(); break;
        case 28: _t->on_add_class_by_hand_clicked(); break;
        case 29: _t->on_pushButton_2_clicked(); break;
        case 30: _t->on_pushButton_3_clicked(); break;
        case 31: _t->on_MydayButton_clicked(); break;
        case 32: _t->on_settings_button_clicked(); break;
        case 33: _t->on_dateEdit_userDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 34: _t->on_back_to_home_week_clicked(); break;
        case 35: _t->on_lineEdit_2_returnPressed(); break;
        case 36: _t->showTomatoClock(); break;
        case 37: _t->handleTomatoClockClosed(); break;
        case 38: _t->on_TaskButton_clicked(); break;
        case 39: _t->on_study_time_set_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->on_rest_time_set_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->on_tomato_clock_start_button_clicked(); break;
        case 42: _t->on_tomato_clock_stop_button_clicked(); break;
        case 43: _t->on_small_tomato_clock_button_clicked(); break;
        case 44: _t->on_tomato_clock_reset_button_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Widget::*)()>(_a, &Widget::changesizeButtonClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Widget::*)(int )>(_a, &Widget::change_photo_clicked, 1))
            return;
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void Widget::changesizeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Widget::change_photo_clicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
