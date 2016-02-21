// Room: /d/jinling/yizhan.c

inherit ROOM;

void create()
{
	set("short", "��վ");
	set("long", @LONG
�����ǹٸ��������վ���ǹ�������·����Ϣ֮����
�����ǵ����߶ɿڵ�һ��С·�����Ͼ��ǽ�������
�����ݡ��������������򡰾��ꡱ��
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/yanjing/npc/person.c" : 1,
  "/d/hangzhou/npc/man.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"guandao3",
  "south" : __DIR__"guandao4",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
