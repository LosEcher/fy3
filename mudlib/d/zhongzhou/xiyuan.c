//xiyuan
  

inherit ROOM;

void create()
{
	set("short", "ϷԺ");
	set("long", @LONG
����ϷԺ�Ĵ���������̨�ϳ�Ϸ�����Ļ��ء����վ������������
���д�����������ǰ����һ����ţ���֪Ҫ����ʲô�¡�
LONG
	);

	set("exits", ([
		"east" : __DIR__"wendingbei2",
		"south" : __DIR__"liangongfang",
		"west" : __DIR__"xiyuan1",
		"north" : __DIR__"sushe",
	]));

	set("objects",([
		__DIR__"npc/xiyuandashou":3,
	]));
	setup();
}
int valid_leave(object me,string dir)
{
	if((int)me->query("xiyuan_dashou") && dir=="east")	return 0;
	return ::valid_leave(me,dir);
}

