// By Mr.music  zhenjiang's �ɿ�

inherit ROOM;

void create()
{
        set("short", "�ɿ�");
        set("long", @LONG
������ͨ��ȥ���ݳǵĶɿڣ�ǰ����ǹ������������Ͼ������ݸ���
������ԥ��ι��������ֽ�����ЩС[33m��[37m��
LONG
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

      set("item_desc", ([
              "chuan" : "��ЩС��Ҳ������ϡ�\n",
                "��":     "����ЩС��������û�˹���Ҳ������Լ���.\n",    
                       ]));
        set("objects", ([
                __DIR__"npc/dashou" : 1,
        ]));

        set("exits", ([
                "south" : __DIR__"guandao10.c",
        ]));

        setup();
//      "/obj/board/mainboard"->foo();
}

void init()
{
    add_action("do_enter", "enter");
    add_action("do_enter", "shang");
}

int do_enter(string sss)
{

object ob;
ob=this_player();
if ((sss!="boat")&&(sss!="chuan"))
  {
   tell_object(ob,"���������أ�\n");
   return 1;
  }
 say(ob->query("name")+"����С�����밶��·. \n");
tell_object(ob,"��С�����������С��.\n");
ob->move(__DIR__"jiangzhong");

  return 1;
 }
