// thd:back_hole.c

inherit ROOM;

int HAVE_BOOK=1;

void create()
{
      set("short", "��������");
	set("long", @LONG
�������������ĺ󲿡����������ǰ����Ȼ��ͬ��ǰ���ܸ������
ȥ�ܳ�ʪ���ⶼ����Ϊһ���ٲ�����Ҳ����ǧ���٣��ʹӶ��Ķ��澭����
����󺣡���˶��г�����ˮ�����������������Կ�������ǰ������ߵ�
ʯ�ں����е��ر�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"qiulong_hole",
	]));
      

	setup();
//	replace_program(ROOM);
}

void init()
{
	object ob;

	if( interactive(ob = this_player()) ) 
	{
		remove_call_out("setup_obj");
		call_out("setup_obj", 1, ob);
	}

	add_action("do_hit", "hit");
	add_action("do_du", "du");
	add_action("do_du", "read");
	add_action("do_climb", "climb");
}

int do_hit(string arg)
{
	object me;

	if(arg!="ʯ��") return 0;

	me=this_player();

	message_vision("$N��������ʯ�ڡ�\n",me);

	if(me->query_skill("force")<40)
	{
		message_vision("$N���ڹ�̫���˸����򲻴�ʯ�ڡ�\n",me);
		return 1;
	}

	message_vision("$N����$N�����$N�ٻ�����\n",me);

	message_vision("$N���ڰ�ʯ�ڸ����ˡ�\n",me);

	if(HAVE_BOOK==1)
	{
		message_vision("$N����ʯ�����б����顣\n",me);

	      if( me->over_encumbranced() ) 
			write("�����Ѿ����ɹ����ˣ�û���������� :-( \n");
	      else
      	{
			message_vision("$N�õ�һ�������澭��\n",me);
		      new(__DIR__"obj/jiuyin1")->move(me);
		      HAVE_BOOK=0;
	      }
	}
	else
	{
		message_vision("$N����ʯ�����ǿյģ�ʲô��û�С�\n",me);
	}

	return 1;
}

int do_du(string arg)
{
	if((arg!="jiuyin jing1")&&(arg!="jing1")) return 0;

	write("���ﲻ�ǰ�ȫ�ĵط����㻹�Ǵ���ȥ�ٶ��ɣ�\n");
	
	return 1;
}

int do_climb(string arg)
{
	object me;

	if(arg!="up") return 0;

	me=this_player();
	
	message_vision("$N������ʯ���������ٲ�������ȥ��",me);

	if(me->query_skill("dodge")<40)
		message_vision("��ϧ$N�Ṧ̫�����û��ã�����Ҳ������ȥ�ˣ�ֻ��˳ԭ·����������",me);	
	else
	{
		message_vision("$N�����������������������ٲ��е�һ����ʯ��\n",me);	
		me->move(__DIR__"rock");
		message_vision("$N�����˶����ҡ�\n",me);	
	}

	return 1;		
}

void setup_obj(object ob)
{
	write("���߰����߰����ƺ������󶴾�������ǰ�ˣ���һʱ���߲�����\n");

	remove_call_out("in_backhole");
	call_out("in_backhole", 5,ob);
}

void in_backhole()
{
	write("�����˺ü���Ȧ���������߽��������󶴡�\n");
}

