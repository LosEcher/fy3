// Room: /d/new/huanhua/hxianting.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
����ͤλ��¦ɽ��´,Ϊ����ʫ����׶���,���㿴����ֻ��һ����
�Ʋ�������ͤ,��ͤ���м䶼�����˲�.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/3jue-jianke.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dloushan",
  "west" : __DIR__"dalu3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
