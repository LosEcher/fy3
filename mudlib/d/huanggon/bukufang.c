// Room: /d/huanggon/bukufang.c

inherit ROOM;

void create()
{
	set("short", "���ⷿ");
	set("long", @LONG
���˳���ˤ��,���ⷿ������ʿ��ϰˤ�ӵĵط�,�����������˺�ʵ
�ĵ���,�����Ǽ���Ƥ�˺�ɳ��,һȦţ�������յ÷��д������,����С
̫����һ���ִ���ʿ��ָ����������ϰ.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yuhuayuan1",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/pangwushi.c" : 1,
  __DIR__"npc/xiaotaijian.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
