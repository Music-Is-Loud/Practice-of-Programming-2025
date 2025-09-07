#include "todo.h"
#include <QDateTime>
#include <QList>
Todo::Todo(const QString& _name, const QDateTime& _baseTime, const QString& _details,
     const bool& _isCompleted, const int& _priority, const int& _todoId):
    Event(_name, _baseTime, _details),isCompleted(_isCompleted),priority(_priority),todoId(_todoId){};


//查询,按照todoId查询,返回找到的那个对象
Todo queryById(const int& todoId)
{
    //TODO:按照日期找到todo项
    Todo target("",QDateTime(),"",false,0,0);
    return target;
}
//按照日期查询,返回找到的对象的列表
static QList<Todo> queryByDate(const QDate& date)
{
    return QList<Todo>();
}

//删除
bool Todo::deleteTodo(const int& todoId)
{
    //TODO:调用查询ID函数并且删除
    return true;
}

//标记完成
bool Todo::markCompleted()
{
    if(isCompleted == false)
    {
        isCompleted = true;
        //TODO:更新状态
        return true;
    }
    return false;
}


//修改信息
bool Todo::updateTodo(const Todo& newTodo)
{
    *this = newTodo;
    //TODO:显示修改
    return true;
}
