// thd:sp.c

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������������һ��Ƭ�ޱߵ��������С������ܵ����ӻ�ֻ�ϸ����
�����̬���죬���������µ������š�����������ţ�ֻ���������Ҷ��
ɳɳ���������ڴ��㲻�ɵľ���������һ�����������������Ҳֻ����
�������������˽���������������������������⣬����һЩС����
С���ˣ����ǿ��������ۣ�ȷɢ���ŵ�����ҩ�㡣��������������������
��ͤ��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "north" : __DIR__"green_pavilion",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int last_time=-10000;

void init()
{
	add_action("do_zhai", "zhai");
}

int do_zhai(string arg)
{
	object me;
	int i;

	if((arg!="hua")&&(arg!="��")) return 0;

	me=this_player();
      if( me->over_encumbranced() ) 
		write("���Ѿ����ɹ����ˣ�û�����û��� :-( \n");
	else
	{
		i=time();
	      if((i-last_time)>300)
	      {
			new(__DIR__"obj/flower7")->move(me);
         
		      message_vision("$N�ӻ�����ժ��һ��������С����\n", me);
        		last_time=i;
	      }
      	else          
			message_vision("�����еĻ��Ѿ���ժ���ˣ�$NʲôҲûժ����\n", me); 		
	}

	return 1;
}




