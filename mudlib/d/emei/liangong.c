// Room: /d/emei/liangong.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��侲�������˾�����Ƶ�,ʯ�ҵײ��ķ�,�������Բ,ȡ��Բ��
��֮��,��ʯ��������һ���ѷ컷��һ��,����ϸ���˿�,��Ȼ��������
ָ��������,�ڴ˴��������Ǳ��˴���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhou.c" : 1,
]));
	set("no_clean_up", 0);
          set("no_fight", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"danshi",
]));
	set("no_magic", 1);

	setup();
	replace_program(ROOM);
}
