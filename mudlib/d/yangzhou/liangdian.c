// Room: /u/swordman/yangzhou/liangdian
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����һ��������¡�����ꡣ���ϰ����ڹ�̨����Ц�ݿɾϵؽӴ��ſ�
�ˡ��������һ��ææµµ�ع����š���������޷��ģ��㻹������
���������ϰ��һЩ�㹤����׬һЩǮ�������ǽ������һ���ƾɵ�
��ʾ(gaoshi)��
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"beijie2",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "��������ȱ���֣������Ӷһ���̹����ɻ
work    ��ʼ������
",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/li" : 1,
]));

  setup();
}
void init()
{
        add_action("do_work", "work");
}

int do_work(string arg)
{
        object ob;
        object me;
        me = this_player();

   if (! me->query_temp("working_in_liangdian")) {
message_vision("$N�ӳ���ж��һ�����Ĵ��ף�������ǽ�ߣ��۵��������ۣ�\n",me);
        me->add("kee",-30);
        me->add("sen",-30);
        ob = new("/obj/money/silver");
        ob->move(me);
        message_vision("���ϰ�Ц���еض�$N˵����������������Ĺ�Ǯ��\n",me);
        me->set_temp("working_in_liangdian",1);
        remove_call_out ("reset_work");
        call_out ("reset_work",1,me);
    } else
    {
        message_vision("���ϰ�Ͻ���$N����������Ъһ�����\n",me);
    }
        return 1;
}
void reset_work (object me)
{
        me->set_temp("working_in_liangdian",0);
}

