// Room: /d/zhongzhou/huiguojv.c

inherit ROOM;

void create()
{
	set("short", "�ڹ���");
	set("long", @LONG
�ڹ������¸ǵķ��ӣ�����������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingbei4",
]));
        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/libanxian" : 1,
]));
        set("no_fight",1);
        set("no_magic",1);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
