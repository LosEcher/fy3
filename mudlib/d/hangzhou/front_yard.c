// Room: /d/hangzhou/front_yard.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
黄土夯实的练武场上正有几个弟子在相互拆招,旁边围了一圈看热闹的,  
不时指指点点,场地四周挂了些沙袋(sandbags),不知是干什么用的,场地的  
北面是一座明亮的厅堂.西面的小屋子里传来饭菜的香味!  
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dizi.c" : 2,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "sandbags" : "几个沉重的沙袋，可以试着打打(da)看。  
",
]));
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"dating.c",
  "south" : __DIR__"wuchang.c",
  "west" : __DIR__"cooking_room.c",
]));

	setup();
	replace_program(ROOM);
}
