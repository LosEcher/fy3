
// By Mr.music  yangzhou's ����

inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
	�������ڶɴ��У�����ֻ�н�û���ˣ�����ֻ���Լ�[31m��[37m��,�㿴�˿�����
��ˮ���������˸���....�ɱ���...����ȫ�ǹ����������������ݣ����Ͼ���
���ݳ�

LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

//      set("item_desc", ([
//              "chuan" : "��ЩС��Ҳ������ϡ�\n",
  //              "��":     "����ЩС��������û�˹���Ҳ������Լ���.\n",
//      ]));

//      set("objects", ([
//              __DIR__"npc/shusheng" : 1,
//      ]));

//      set("exits", ([
//              "south" : __DIR__"dukoulu",
//      ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
//    call_out("go_ahead",20,this_player() );
    add_action("do_hua", "hua");
}

int do_hua()
{
object ob;
ob=this_player();
tell_object(ob,"�㶶�������������Ͻ�ˮ����������һ��. \n" );
if ( ob->query("kee") > 20) ob->add("kee",-20);
if( random( ob->query("kar") -10 ) == 0)
 {
     tell_object(ob,
   "ͻȻһ�����˴������㻹û���ü��г������ͱ���ˮ��û��!\n");
//    ob->set("kee",0);
//    ob->set("gin",0);
    ob->unconcious();
   ob->move("/d/zhongzhou/dukou");
  return 1;
 }
ob->move("/d/zhongzhou/dukou");
return 1;
}

