// Room: /d/huanggon/qianrouzhuang.c

inherit ROOM;

void create()
{
	set("short", "Ǯ��¡��ׯ");
	set("long", @LONG
�˴��Ǳ��ǵ�Ǯ��¡��ׯ,��˵���е��ⶼ�Ǵ˴�������.�㿴��һ
�Ű���̨�ϰ��Ŵ����,���⵶,�޹ǵ�,��嵶���˺ü���.ʮ�����
��������ڹ�����.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qianlaob.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ndajie1",
]));

	setup();
	replace_program(ROOM);
}
