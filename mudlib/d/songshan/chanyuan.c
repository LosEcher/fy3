// Room: /d/songshan/chanyuan.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create()
{
	set("short", "������Ժ");
	set("long", @LONG
������Ժ����ɽ������Ժ�йŰ�ɭɭ�����ϲ��޷���Ժ��
����������ǧ�ˡ�
LONG );
	set("exits", ([
		"southdown" : __DIR__"junjigate",
	]));
set("valid_startroom",1);
	set("objects", ([
		__DIR__"npc/zuo" :1,
	]));
//	set("no_clean_up", 0);
	setup();
"/obj/board/songshan_board"->foo();
	replace_program(ROOM);
}

