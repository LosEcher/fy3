//canting

inherit ROOM;
void create()
	{
        set("short", "��������");
        set("long", @LONG
һ������������Ϳ�������������ÿ����ǰ��һ�������ڵĹ��ӡ���
�뿴���Լ���������Ρ������������������еĻ������Կ���ǽ�ϵļ�
������(pu)��
LONG
        );
	  set("exits", ([
   	 "north"  : __DIR__"yanlingdong",

]));
	set("objects" , ([
		__DIR__"npc/lilaoban" : 1,
	]));
        set("item_desc", ([
                        "pu" :
"            ��   ��   ��   ��   ��    ȫ
	�ҳ�����-----------�������������Σ����͡�
	��������-----------�������⣬���ͣ��Σ����͡�
	
\n"]));

        setup();
	}
void init()
{
	add_action("do_shao","�ն���");
	add_action("do_shao1","������");
}

int do_shao()
{
object ob1,ob2,ob3,ob4;
object me;
me = this_player();
ob1 = present("yan",me);
ob2 = present("xiangyou",me);
ob3 = present("doufu",me);
ob4 = present("lajiao",me);
if( ob1 && ob2 && ob3 && ob4)
{
message_vision("$N�������ͣ����붹���������������ΰ�����������\n",me);
destruct(ob1);
destruct(ob2);
destruct(ob3);
destruct(ob4);
call_out("give_shao",random(3)+1,me);
return 1;
}
return 0;
}

int give_shao(object me)
{
object shao;
if(me) 
if( environment(me) == this_object())
{
shao = new(__DIR__"obj/jcdf");
if(shao->move(me))
message_vision("$N����պõļҳ�������ð�������ߡ�\n",me);
}
return 1;
}


int do_shao1()
{
object ob1,ob2,ob3,ob4;
object me;
me = this_player();
ob1 = present("yan",me);
ob2 = present("xiangyou",me);
ob3 = present("jiangyou",me);
ob4 = present("turou",me);
if( ob1 && ob2 && ob3 && ob4)
{
message_vision("$N�����ʵ����������У���΢��ʼ��������\n",me);
destruct(ob1);
destruct(ob2);
destruct(ob3);
destruct(ob4);
call_out("give_shao1",random(3)+1,me);
return 1;
}
return 0;
}

int give_shao1(object me)
{
object shao1;
if(me) 
if( environment(me) == this_object())
{
shao1 = new(__DIR__"obj/turou1");
if(shao1->move(me))
message_vision("������������պ��ˣ�$N�������ڻ��\n",me);
}
return 1;
}

