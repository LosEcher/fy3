// Room: /d/huanggon/kunningon.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������ԭ���ǻʺ�ľӴ�,�����ĳɻʵۺͻʺ���Ķ���.���չ��
����Ҫ�ڴ˹�������.�˵���м������˾�����������ʽ�����.������
���ǽ�̩��,����������ž�������԰.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"jiaotaidian",
  "north" : __DIR__"yuhuayuan2",
]));

	setup();
	replace_program(ROOM);
}
