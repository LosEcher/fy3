  // jiaozi.c ����
//2000.2.6 by panguan

#include <ansi.h>

inherit ITEM;

void create()
{
         set_name(HIG"ǧ������"NOR, ({ "jiaozi" }) );
        set("long",
  HIG"ǧ��������txjh��ʦ����չ�͢�ط����ɼ���ʮ�������ҩ�ģ���ʱʮ����
���ƶ��ɵ���ҩ��ϰ��֮�˷��ú󲻵�������һ���ӵĹ���,��ѧ����Ҳ�ܵõ���ߡ�\n"NOR);
          set("unit", "��");
        set("weight", 50);
        set("value", 10000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");
          ob=this_player();
         if ((int)ob->query_temp("liwu2000")==1)
{
           message_vision("ͻȻ$N������˷���һ����Ц���������㲻�³���ѽ��\n", ob);
        return 0;
}
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("sen",(int)ob->query("max_sen"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));
           ob->set_temp("liwu2000",1);

          ob->set("food",800);
          ob->set("water",800);
            ob->add("max_force",100);
          ob->add("wgjn",200000);
       write(HIR+"�����û��ע�⣬͵͵����ǧ�����ӣ��Ȳ�����������ȥ����Ȼ��ֻ��
  һ�ɺƵ��ޱȵ�����ֱ�嶥��,��æ��ϥ��������Ŀ�˹�...�\

 ����书���������ˣ�������������  !!!  ���������ˣ������� !!!���\n"NOR);

        message("vision", HIG + ob->name() + 
"͵͵����ǧ�����ӣ��Ȳ�����������ȥ����Ȼ��ֻ��һ�ɺƵ��ޱȵ�����ֱ�嶥��,
��æ��ϥ��������Ŀ�˹�...�\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
