#include <ansi.h>
inherit NPC;
int occasionally_event(object me);
string *namesa = ({
  GRN"���ڰ�������֮�ʣ��ֻ�������ͯ�������ʱ�⡣"NOR,
  HIB"һֻ�����ڵ͵͵ط��š�"NOR,
  HIM"һֻɫ�ʰ�쵵ĺ���Χ����ת��תȥ��ת���ַ����ˡ�"NOR,
  HIY"���ܾ�������ط�͸�ŵ�Ź֡�"NOR,
  HIG"һ��΢�紵�������Ե���Ҷ����ɳɳ��������"NOR,
  HIC"�и��˺������������㾹Ȼ���ø���������ʶ��������ͷ���Ρ�"NOR,
  MAG"Զ������һ����������������Ȼ�������£����ɵ�������������"NOR,
  CYN"���Ȼ����һ��������һֻ�ɰ���С���Ӵ�����߷��˹�ȥ������"NOR,
WHT"���ϻ���Ʈ��һֻ���ݣ�����ϡ��������������һ֧��
��\n\n��������ȥ������ԽƮԽԶ�ˡ�����"NOR,
 });
string *namesb = ({
  WHT"��һ���Ӹе�����ƣ�����������᲻����"NOR,
  HIM"һ���������ζƮ�˹������㲻������һ��"NOR,
  YEL"��Ȼһ����â������ǰ��������ֻ����ǰһ����Ҳ��֪������ʲô��"NOR,
  HIC"����Լ�����ݶ��������춯��"NOR,
  HIG"���Ȼ�������������ڵ�����̸��ʲô��"NOR,
  HIB"���ܾ�������������ʲô������"NOR,
  CYN"��ֻ�е���Χ�ž��������·�һ������ڵ��϶����ü���"NOR,
  HIR"���Ȼ�е�������������һ��ɱ�������˲���������"NOR,
  HIY"��Զ������һ�󾪺����������ﲻ�ɵ�һ����"NOR,
 });

void create()
{
        set_name("����ȱ", ({ "hua wuque" }) );
        set("title", "��֮��");
        set("nickname", WHT"���곤��"NOR);
        set("gender", "����" );
        set("age", 26);
        set("str", 30);
        set("int", 30);
        set("per", 30);
        set("long",
                "������Ѫ��������ʦ��\n");
        set("attitude", "peaceful");
        set("max_kee", 1000);
        set("max_gin", 1000);
        set("max_sen", 1000);
        set("kee", 1000);
        set("gin", 1000);
        set("sen", 1000);
        set("no_shown", 1);

        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 90);
        set("mana", 2000);
        set("max_mana", 2000);
        set("mana_factor", 20);

        set("combat_exp", 9000000);
        set("score", 90000);
        set_skill("unarmed", 300);
        set_skill("parry", 300);
        set_skill("dodge", 300);

        set("chat_chance", 1);
        set("chat_msg", ({
                (: occasionally_event(this_object()) :),
        }) );
        setup();
}

int occasionally_event(object me)
{
 object *usr ;
 int i;
        string msg;
        string msga = namesa[random(sizeof(namesa))];
        string msgb = namesb[random(sizeof(namesb))];
         usr = users();
        for(i=0; i<sizeof(usr); i++) 
                {
                if( !environment(usr[i]) ) continue;
                if( !environment(usr[i])->query("outdoors") ) 
//      usr[i]->set_temp("event_msg_ok",1);
        msg = msgb;
        else
        msg = msga;
//               tell_object(usr[i] ,"\n"+ msgb +"\n\n");
                }
      message("system", "\n"+ msg +"\n\n", users());
        return 1;
}

