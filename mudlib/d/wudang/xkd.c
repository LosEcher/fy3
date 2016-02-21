// Room: /u/nangong/xkd/xkshi.c

inherit ROOM;

void create()
{
        set("short", "ʯ��");
	set("long", @LONG
vv    ���������͵�������һ��ʯ��,ƽʱ���͵�����λ�����������ﾲ��,
�������ڲ���ʲô��ѧ����.(wall)
LONG
	);
  set("item_desc", ([ /* sizeof() == 1 */
              "wall":
"                   �Կ��Ϻ�ӧ���⹳˪ѩ���������հ����������ǡ�
                    �й����������ѽ�ϥǰ�ᡣ������캥������Ȱ������
                    ������Ȼŵ��������Ϊ�ᡣ�ۻ����Ⱥ�������������
                    ���Իӽ𴸣��������𾪡�ǧ���׳ʿ������ب���մ����ǡ�
                    ���������㣬��������Ӣ��˭������£�����̫������
",]));
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"midao2",
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
         add_action("do_study", "yanxi");
         add_action("do_study", "study");
         add_action("do_study", "watch");
}

int do_study(string arg)
{
         mapping fam;
         object me = this_player();

         if ( !living(me) ) return 0;

         if (!(fam = me->query("family")) || fam["family_name"] != "���͵�")
                  return notify_fail("�㲻�����͵����ӣ�������������͵��书��\n");

         if ((int)me->query_skill("literate", 1) > 1)
                  return notify_fail("�㿴�˰���,û����ʲô����? \n");
         if ((int)me->query("kar") < 28)
                  return notify_fail("�㿴�˰���,û����ʲô����? \n");
         if ((int)me->query("int",1) > 18)
                  return notify_fail("�㿴�˰���,û����ʲô����? \n");

         if ( arg =="wall" )  {
                  message_vision("$N����ʯ�ڵ����ֳ�����\n", me);

                  if ((int)me->query_skill("force", 1) > 250)
                           return notify_fail("ʯ��������������,���޷������ʲô�¶�����\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("����ú���,����˯����\n");

                  write("�㾲����ϰʯ�ڵ��ؼ������ڹ��ķ���Щ����\n");
                  me->receive_damage("gin", 10+random(5));
                  me->receive_damage("kee", 20+random(10));
me->improve_skill("xiake-shengong", 30 + random((int)me->query("int")));
                  return 1;
         }
/*
         if ( arg =="ground" ) {
                  message_vision("$N��ʼ��ͷ���ӵ��ϵ�ͼ�Ρ�\n", me);

                  if ((int)me->query_skill("parry", 1) > 250)
                           return notify_fail("����ŵ�����ϰһ�ᣬֻ���������Ѿ������ء�\n");

                  if ((int)me->query("gin") < 30)
                           return notify_fail("��һ������,�������Թ���,����Ϣһ���ˡ�\n");

                  write("��ģ�±��ϵ�ͼ����������,��ϰ�м����㡣\n");
                  me->receive_damage("kee", 10+random(10));
                  me->receive_damage("gin", 10+random(10));
                  me->improve_skill("parry", (int)(me->query_int()/4) +
                                                          (int)(me->query_skill("parry", 1)/5) );
                  return 1;
         }
*/
        if ( arg =="top" ) {
                  message_vision("$N���ӱ���ͼ�Ρ�\n", me);
/*
                  if ((int)me->query_skill("force", 1) < 30) {
                            message_vision("$N����ͼ�ο�ʼ��Ѫ��ӿ, Ŀ��ֱ����,��Ȼ�������. \n", me);
                            write("�㶨������,������ͼ�������ٿ�Ϊ��. \n");
                            message_vision("$N��Ȼҡ������,����������Ѫ. \n", me);
                            me->receive_wound("kee", 30);
                            me->unconcious();
                            return 1;
                    }
*/
                  if ((int)me->query_skill("dodge", 1) < 30 )
                            return notify_fail("��Ļ����Ṧ�������޷�����Щͼ���������ʲô����\n");

                  if ((int)me->query_skill("xk-bufa", 1) > 250)
                            return notify_fail("����ѧ������������,Ҫ����һ��,ֻ�ܿ��Լ��ڼ���ϰ��\n");

                  if ((int)me->query_skill("xk-bufa", 1) > (int)me->query_skill("dodge", 1) )
                            return notify_fail("����������������Ѵﵽ����Ļ����Ṧ���ޡ�\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("����ú���,����˯����\n");

                  write("�㾲����ϰʯ���ϵ�ͼ�Σ��������͵��Ṧ���ľ�������,��ʱé���ٿ���\n");
                  me->receive_damage("kee", 20 + random(10));
                  me->receive_damage("gin", 10 + random(5));
                  me->improve_skill("xk-bufa", 20 + random((int)me->query("int")/2) + 
random((int)me->query_skill("dodge", 1) / 5));
//                write(RED"��ϲ����ѧ�����Ͳ���. \n"NOR);
                  return 1;
         }

         return 0;
}

