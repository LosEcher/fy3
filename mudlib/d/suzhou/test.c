// Room: /d/suzhou/qianzhuang.c

inherit ROOM;

void create()
{
	object ob;
	set("short", "Ǯׯ");
	set("long", @LONG
Ǯׯ�ھ����ĵģ����˶���С�ľ����ĸ����Լ����¡���Ȼ���ݵ��ΰ����ã�
���㻹�ǽ�����קס�Լ���Ǯ����������������Ƶġ�Ǯ�ϰ����۾�����Ĵ���
���̣���û��ע�⵽���߽�����
LONG
	);
	set("flag",0);
	set("exits", ([ /* sizeof() == 1 */
]));
	set("no_clean",1);
	set("objects",([
		__DIR__"npc/mouth":1,
]));
	setup();
	if(query("flag")==0)	{
		ob=load_object(__DIR__"npc/obj/zhujian");
		ob->move(this_object());
		set("flag",1);
	}
}
