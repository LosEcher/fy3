// Room: /d/yangzhou/jiedao1.c

inherit ROOM;

void create()
{
	set("short", "�ֵ�");
	set("long", @LONG
	���������ݳǵ�һ��С���ϣ�����ٻĽ������Ժ�������
�������̵���˼�Ҳϡϡ���䡣ż�����˾�����Ҳ����ɫ�Ҵҡ���
���͵����ݵ������ǽ��ˡ����߶��������ǼҴ����̡�

LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/yangzhou");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"yz-x1",
  "west" : __DIR__"datiepu",
  "south" : __DIR__"jiedao2",
  "east" : __DIR__"gongyuan",
]));
	set("objects", ([ ]));

	setup();
	replace_program(ROOM);
}
