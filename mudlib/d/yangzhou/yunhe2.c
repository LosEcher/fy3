// music yangzhou's �˺� 2

inherit ROOM;

void go_ahead(object );

void create()
{
  set ("short", "�˺�");
  set ("long", @LONG
	�㷺�����˺��ϣ����ڴ�ͷ��΢��ϰϰ�����±̲�����������ܸ�
���е��ƣ���ˣ����������ޱߵĿ�Ұ��������ֻԽ��Խ�٣��㿴��������
����������һ����顣
LONG
    );

  set("outdoors", "/d/yangzhou");
  setup();
}

void init()
{
    call_out("go_ahead",20,this_player() );
    add_action("do_hua", "hua");
}

int do_hua()
{
tell_object( this_player() ,"����������һ��·. \n" );
this_player()->add("kee",-10);
return 1;
}

void go_ahead(object me)
{
if( (me->query_temp("yz_sz")) ==2 )
    {
    me->move("/d/yangzhou/yunhe1");
    return;
    }
if( (me->query_temp("yz_sz")) ==1 )
    {
    me->move("/d/suzhou/yunhe3");
    return;
    }
    // if not 1,2 ?
    me->move("/d/yangzhou/qiaoxia");
return;
}


