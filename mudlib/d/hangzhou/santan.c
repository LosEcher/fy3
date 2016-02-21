// Room: /d/hangzhou/santan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "三潭印月");
	set("long", @LONG
清风徐来,水波不兴,远远看去,水面上有三座小小的塔尖.这是当初 
修建白堤时为观测水位而建的三座白塔.名为三潭.塔腹中空，球面体上 
排列着五个等距离圆洞，月明之夜，洞口糊上薄纸，塔中点燃灯光，洞 
形印入湖面，呈现许多月亮，真月和假月其影实是难分. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"wanghu.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
