// Room: /d/huanggon/qianqinmen.c

inherit ROOM;

void create()
{
	set("short", "Ǭ����");
	set("long", @LONG
����Ƭ�����᳤�Ĺ㳡,���������������,������ϵ���̨�׾���Ǭ
����,���Ĵ������߳���.���˴��ž�����͢.������Ǭ���,�ϱ߾�����
ʮ��̨��,���Ǳ��͵�,����ͨ�����ŷ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"yuhuayuan1",
  "west" : __DIR__"yuhuayuan",
  "south" : __DIR__"baohedian",
  "north" : __DIR__"qianqingon",
]));

	setup();
}
int valid_leave(object me,string dir)
{
if (dir=="north"&&me->query("xxy/lvl")<4) 
return notify_fail("������ϵ�ͱ��ص���������ס�ˣ�\n");
return ::valid_leave(me,dir);
}
