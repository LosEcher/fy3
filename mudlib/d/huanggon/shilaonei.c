// Room: /d/huanggon/shilaonei.c

inherit ROOM;

void create()
{
	set("short", "ʯ����");
	set("long", @LONG
��̵�ʯ��,�ı߶��Ǻ��ص�ʯͷ,�ϱ�ǽ�ϰ�װ������,һ�����Ź�
�ý�����,ǽ������һ��񵾲�,����һ��ùζ.��ֻ���󾪻ŵ��ܵ�ǽ��
�߶�������,����������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/aobai.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"shilaoxiaotang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
