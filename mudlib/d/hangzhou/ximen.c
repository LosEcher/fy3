// Room: /d/hangzhou/ximen.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���ݳǵ�����,����ɭ��.�����������̲�����,�ߴ����ש��ǽ����
Щ����,��ǽ��ש���������Ұ��,���������ž���һƬƽԭ.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dadao1",
  "west" : __DIR__"lu1.c",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shoubei.c" : 1,
  __DIR__"npc/bing.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
