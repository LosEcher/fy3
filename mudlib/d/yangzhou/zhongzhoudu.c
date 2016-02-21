// Room: /u/swordman/yangzhou/zhongzhoudu
inherit ROOM;
void check_trigger();
void on_board();
void arrive();
void close_passage();
int do_yell(string arg);
void reset();


void create ()
{
  set ("short", "���ݶ�");
  set ("long", @LONG
������ͨ��ȥ���ݳǵĶɿڣ�ǰ����ǹ������������Ͼ������ݸ���
����ͣ��ЩС�����ڴ���վ��һλ�󺺡�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/d/zhongzhou/dukoulu",
]));
  set("outdoors", "/u/swordman");
        set("objects",([
                "/d/zhongzhou/npc/konglaoer":1,
        ]));


  setup();
}
void init()
{
    add_action("do_yell", "yell");
}
void check_trigger()
{
    object room;

    if(!query("exits/enter") ) {
        if( !(room = find_object(__DIR__"duchuan")) )
            room = load_object(__DIR__"duchuan");
        if( room = find_object(__DIR__"duchuan") ) {
            if((int)room->query("yell_trigger")==0 ) {
                room->set("yell_trigger", 1);
                set("exits/enter", __DIR__"duchuan");
                room->set("exits/out", __FILE__);
                message("vision", "һҶ���ۻ�����ʻ�˹�����������һ��̤��"
                    "����ϵ̰����Ա�˿�\n���¡�\n", this_object() );
                message("vision", "������һ��̤�Ű���ϵ̰����γ�һ������"
                    "�Ľ��ݡ�\n", room);
                remove_call_out("on_board");
                call_out("on_board", 15);
            }
            else
                message("vision", "ֻ���ý��������������������"
                    "�����æ���š�����\n",this_object() );
        }
        else
            message("vision", "ERROR: boat not found\n", this_object() );
    }
    else 
        message("vision", "����һֻ�ɴ��ϵ�������˵�������������أ������ɡ�\n",
            this_object() );
}


void on_board()
{
    object room;

    if( !query("exits/enter") ) return;

    message("vision", "������̤�Ű��������������һ�㣬��������ʻȥ��\n",
        this_object() );

    if( room = find_object(__DIR__"duchuan") )
    {
        room->delete("exits/out");
        message("vision", "������̤�Ű���������˵��һ��������ඡ���"
            "���һ�㣬������\n����ʻȥ��\n", room );
    }
    delete("exits/enter");

    remove_call_out("arrive");
    call_out("arrive", 20);
}

void arrive()
{
    object room;
    if( room = find_object(__DIR__"duchuan") )
    {
        room->set("exits/out", __DIR__"dukou");
        message("vision", "����˵���������ϰ��ɡ����漴��һ��̤�Ű�"
            "���ϵ̰���\n",room );
    }
    remove_call_out("close_passage");
    call_out("close_passage", 20);
}

void close_passage()
{
    object room;
    if( room = find_object(__DIR__"duchuan") ) {
        room->delete("exits/out");
        message("vision","������̤�Ű����������ѱ���ʻ���ġ�\n", room);
        room->delete("yell_trigger"); 
    }
}

int do_yell(string arg)
{
    string dir;

    if( !arg || arg=="" ) return 0;

    if( arg=="boat" ) arg = "����";
    if( (int)this_player()->query("force") < 300 )
        message_vision("$Nʹ�����̵���������һ������" + arg + "��\n",
            this_player());
    else if( (int)this_player()->query("force") > 600 )
        message_vision("$N���˿�����һ����" + arg + "������������ƽ�͵�ԶԶ��"
            "�˳�ȥ��\n", this_player());
    else
        message_vision("$N������������Хһ������" + arg + "����\n",
            this_player());
    if( arg=="����")
    {
        check_trigger();
        return 1;
    }
    else
        message_vision("������ԶԶ����һ���������" + arg +
            "��������\n", this_player());
    return 1;
}

void reset()
{
    object room;

    ::reset();
    if( room = find_object(__DIR__"duchuan") )
        room->delete("yell_trigger"); 
}

int valid_leave(object me,string dir)
{
        string banghui;
        object ob;

        ob=present("kong laoer",this_object());
        if(!objectp(ob) || !living(ob))
                return ::valid_leave(me,dir);
        banghui=(string)me->query("banghui");
        if(me->query_temp("oldsix/can_leave"))  {
                me->delete_temp("oldsix/can_leave");
                return ::valid_leave(me,dir);
        }
        if(banghui && banghui==(string)ob->query("banghui"))
                return ::valid_leave(me,dir);
        if(dir!="enter")        return ::valid_leave(me,dir);
        return notify_fail("���϶����ڴ�ͷ����Ҫ�����ȸ�(pay)����������\n");
}


