//TOHSQ6.C

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
һ�Ҿ޴���ٲ������������Խɽ�䣬ˮ����Ũ�÷·����
����ˮ�������ɽ�ͼ����𱡱����������۲�ɢ��������ˮ��
���������
LONG
	);

	set("exits", ([
		"north" : __DIR__"tohsq7",
		"south" : __DIR__"tohsq5",
	]));

	set("outdoors", "mingjiao");
set("objects",([
      __DIR__"npc/zhangzhong":1,
              ]));
	setup();
	replace_program(ROOM);
}
