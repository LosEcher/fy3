// Room: /d/songshan/qimuque.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create()
{
	set("short", "��ĸ��");
	set("long", @LONG
��ĸ������ɽ��´������£��Ǻ�����ĸ��ǰ������ڣ���̫��
��ͬΪ����������֮һ��
LONG );
	set("exits", ([
		"east"  : __DIR__"qimushi",
	]));
	set("objects",([
		__DIR__"npc/gao":1,
	]));
	setup();
	replace_program(ROOM);
}

