#include "lecture.h"

Lecture::Lecture(const QString& _name, const QDateTime& _baseTime, const QString& _details,
                 const QString& _courseId, const int& _lectureId, const QString& _location):
    Event(_name, _baseTime, _details), m_courseId(_courseId), lectureId(_lectureId), location(_location)
{

}


//直接提供信息创建类
void Lecture::createCourse(const QString& _courseId, const QString& _courseName,const lectureTime* _timeList,
                           const QString& _location, const QString& _details)
{
    //TODO:遍历timeList的所有时间，每个时间调用createCourse创建对象
}
//提供文件创建类
void Lecture::createFromFile(const QString& filePath)
{
    // TODO: 解析CSV文件,调用createCourse创建对象

}


//删除门课所有的课程
bool Lecture::deleteCourse(const QString& courseId)
{
    //TODO:删除这门课所有的课程，调用这门课的所有deleteLecture()
    return true;
}
//删除某一节课
bool Lecture::deleteLecture(const QString& courseId, const int& lectureId)
{
    // TODO: 根据ID查找并删除某一节课
    return true;
}


//查询所有课
QList<Lecture> queryAllCourses(QString courseId)
{
    //TODO:查找所有符合的ID
    return QList<Lecture>();
}


//修改当前类对应的这节课
bool Lecture::updateLectureInfo(const Lecture& newLecture)
{
    *this=newLecture;
    //TODO：显示修改
    return true;
}
//修改某门课程
bool Lecture::updateCourseInfo(const QString& courseId, const int& lectureId,const Lecture& newLecture)
{
    //TODO：调用queryAllCourses,找到所有这门课的对象，再调用updateLectureInfo
    return true;
}







