// Room: /d/suzhou/kezhan.c

inherit ROOM;

void create()
{
        set("short", "˫����ջ");
	set("long", @LONG
������Ǿ�������Ŀ�ջ����ǰ�����ĸ�������������д�ţ�˫����ջ����
�����ջ����һ�ٶ������ʷ�ˡ�������һ���ĳԣ�ס��������������
�������ſ�վ��һ��С��������Ӵ����ˣ�
LONG
	);
        set("exits", ([ /* sizeof() == 2 */
                "northwest" :__DIR__"shizhong.c",
		"up" :__DIR__"woshi",
]));

	set("objects",([
		__DIR__"npc/xiaoer" :1,
]));
	setup();
}
int valid_leave(object who,string dir)
{
	object npc,env;
	npc=present("xiao er",this_object());
	env=new("/d/suzhou/woshi.c");
//	if(sizeof(all_inventory(env))>=1)   {
//	 return notify_fail("¥�Ͽͷ����������´������ɡ�\n");
//	}
	if(!npc)	{
		who->set_temp("rent_paid",0);
		return 1;
		}
	if(dir=="up"&& who->query_temp("rent_paid")==1) 	{
		who->set_temp("rent_paid",0);
		return 1;
		}
	if(dir=="up"&&who->query_temp("rent_paid")==0)	{
	return notify_fail("��С����Ц����û�����Ӿ���ס�ޣ����������������\n");
			}
	return 1;
}
