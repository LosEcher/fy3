// Room: /d/zhongzhou/yaopuboss.c

inherit ROOM;

void create()
{
	set("short", "ҩ���ʷ�");
	set("long", @LONG
�������ҩ���ʷ���ҩ�̵�ŷ���ϰ�������̫ʦ���ϳ�����ء�ҩ
�̵��ʷ��������ʱ���һ��æ�����ʡ���������һ��ѵ��ʱ�������Ҫ
����������Ǯ���ҵĿɾͺ��ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wupanbing.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yaopu",
]));

	setup();
	replace_program(ROOM);
}
