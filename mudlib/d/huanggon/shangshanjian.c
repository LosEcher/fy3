// Room: /d/huanggon/shangshanjian.c

inherit ROOM;

void create()
{
	set("short", "尚膳监");
	set("long", @LONG
尚膳监就是御厨房,十多口大锅内正不停的煮着东西.一股香味在厨
房中久久不散,十多个御厨,太监正忙得不可开交,一些锅碗瓢盆就扔在
木盆中,看来要等人洗.
LONG
	);
	set("objects", ([ /* sizeof() == 4 */
  __DIR__"npc/obj/puercha.c" : 1,
  __DIR__"npc/obj/mixian.c" : 1,
  __DIR__"npc/obj/huotui.c" : 1,
  __DIR__"npc/obj/baiqierou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yuhuayuan",
]));

	setup();
	replace_program(ROOM);
}
