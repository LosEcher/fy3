// Room: /d/quanzhou/daxiong.c

inherit ROOM;

void create()
{
	set("short", "���۱���");
	set("long", @LONG
һ�ۿ���ȥ,ֻ�����ж����������������,��ϸ��һ�µĻ�,�ͻᷢ 
�ֹ���96��,�����ֳư�����,���й������巽������,�������̷��� 
�ּ�24·,������ǰ��̨��ʯ����������˸���,ʮ�־���. 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"obj/yougang.c" : 1,
  __DIR__"npc/fangzhang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"wstreet3",
  "westup" : __DIR__"jietai",
]));

	setup();
	replace_program(ROOM);
}
