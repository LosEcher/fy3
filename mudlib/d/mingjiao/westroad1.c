//westroad1.c

inherit ROOM;

void create()
{
        set("short", "ɽ·");
        set("long",
             "����һ��ֱͨ������ɽ·������Զ����ȺɽΡ�룬����Ʈ�죬\n"
	"����ǰ��Զ����Ҫ������ɽ֮���ˡ���������СϪ��\n"
	);
	set("exits",([
		      "west" : __DIR__"westroad2",
		      "east" : "/d/huizhu/xiaoxi",
	   ]));
	setup();
	replace_program(ROOM);
}
        
