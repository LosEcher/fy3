// Room: /d/huanggon/road4.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵġ�
���̵ġ����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·��������·������
��������������֡��������������������Ͼ��ǡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "city2");
	set("objects", ([ /* sizeof() == 1 */
  "/d/taishan/npc/jian-ke" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/d/taishan/yidao5",
  "west" : __DIR__"road7",
]));

	setup();
	replace_program(ROOM);
}
