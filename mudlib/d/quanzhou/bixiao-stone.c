// Room: /d/quanzhou/bixiao-stone.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��������һ�鶸���Ĵ���ʯ,һ�˽���ɽ��,��������ɽ��֮��,��
֪˭�ڴ˸��������������,ʯ���Ϸ���ʯ����,��һ����ɫ��'��'��.
LONG
	);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"chaoan.c",
  "southeast" : __DIR__"chayuan",
  "northup" : __DIR__"yixiaot.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
