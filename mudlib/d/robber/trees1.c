// Room: /d/robber/trees1.c

inherit ROOM;

void create()
{
	set("short", "�ɰ���");
	set("long", @LONG
ϡ���һƬ�ɰ���,�����Ǻ���һƬ��Ҷ,������,�ƺ��е�����ˮ��
�ӽ���ð����,�����г������õ�ζ��.ӭ��һ��������ȥ����Ƥ,���滹��
��Щ����ŤŤ����(zi).
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "zi" : "��֪��˭��С������[�ô�����]������,����ȥ����ŤŤ��
�϶�ûѧ������д��.
",
]));
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"trees",
  "south" : __DIR__"trees3",
]));

	setup();
	replace_program(ROOM);
}
