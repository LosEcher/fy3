// Room: /d/suzhou/meizhuang/yuemendong.c

inherit ROOM;

void create()
{
	set("short", "�¶���");
	set("long", @LONG
�¶����Ŷ���д�š����ġ����֣�����ɫ�������ɣ����²Ծ�������
����ͺ���̵��ֱ��ˡ�������������������ͨ����ȡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"huajing",
  "south" : __DIR__"heilang6",
]));
	set("objects",([
		__DIR__"npc/huyuan":2,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
