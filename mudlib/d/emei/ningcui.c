// Room: /d/emei/ningcui.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����һ��С¥,ȫ����̴ľ�Ƴ�,�ƿ�����,����һ��Ƭ����,��Ҷ
ҡ��,����ɫ͸������,����¥�������.¥ǰ��ͥԺ��,��������÷
ɽ��.�̽Ƿ���,�̴��������������,�ļ���Ӣ�ں���һ��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qifodian",
]));

	setup();
	replace_program(ROOM);
}
