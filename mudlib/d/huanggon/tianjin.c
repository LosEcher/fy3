// Room: /d/huanggon/tianjin.c

inherit ROOM;

void create()
{
	set("short", "�����쾮");
	set("long", @LONG
˵���쾮,��ʵ�Ǹ���Ժ��,�տյĳ������ϰ�ɫʯ��,һ���ǿ�ˮ
��,���еĸ����˼�,ʱ������Ϸ�����ڼ��г���,�Ǿ��ٲ��������Ŀ�
��,�ϱ��Ǵ���,����������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"xiaogardon",
  "south" : __DIR__"kangdating",
  "north" : __DIR__"kangneiting",
]));

	setup();
	replace_program(ROOM);
}
