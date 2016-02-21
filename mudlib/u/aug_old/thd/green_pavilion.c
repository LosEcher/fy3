// thd:green_pavilion.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "����ͤ");
	set("long", @LONG
��������ȫ�����Ӵ�ɵ�ͤ�ӡ�����ͤ���Ѿ���������Ϊһ�壬��Զ
�����������ֲ������������֣������ǻ���ͤ��ͤ�����ſ��ң����顰��
��ͤ�����֣��⵱ȻҲ�ǻƵ������ּ��������������ȷʮ���ر��ǲ�
�����֣�������һ����Ҷͼ�������еıʻ���������Ҷ��ɵģ���������
һ����ζ���Ƶ�����������Ѿ���ʫ��˼������������Ʈ�ݱ�֮������
�ܵ�Ҳ����ѷɫ��ͤ�ӵı����������ֵĳ��ڣ����ϱߵ������ر�Ũ�ܣ�
����ôҲ���ϲ�����·�ˡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 5 */
          "north" : __DIR__"np",     
          "west" : __DIR__"wp",          
          "east" : __DIR__"ep",               
          "northwest" : __DIR__"nwp",
          "northeast" : __DIR__"nep",
	]));
      
	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_go", "go");	
}

int do_go(string arg)
{
	object me;

	me=this_player();
	switch(arg)
	{
		case "south": { me->move(__DIR__"sp"); return 1; }
		case "s": { me->move(__DIR__"sp"); return 1; }
		case "southwest": { me->move(__DIR__"swp"); return 1; }
		case "sw": { me->move(__DIR__"swp"); return 1; }
		case "southeast": { me->move(__DIR__"sep"); return 1; }
		case "se": { me->move(__DIR__"sep"); return 1; }	
		default: return 0;
	}
}