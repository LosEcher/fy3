// Room: /d/hangzhou/wuyuan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "��԰");
	set("long", @LONG
һȦ�ߴ�ĵ���ɫ��ǽΧ����һ��԰��.̧ͷ��ʱ,�ܿ����ߴ�  
����ľɭɭ.һ��שʯ�̳ɵ�С��һֱͨ�����Ȱ����ŵ�Ժ��.��Χ  
�����˼�,��԰�д�����ˮ����,��������֮��.  
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"huagang.c",
  "north" : __DIR__"dadao3.c",
]));

	setup();
	replace_program(ROOM);
}
